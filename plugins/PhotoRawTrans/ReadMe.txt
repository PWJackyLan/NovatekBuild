        下面是做水印logo工具的用法。

 

 

 

Water logo 图档可以是 JPEG or bmp, 若背景需要透明色 (color key), 建议用 bmp 来做,

因 JPEG 压缩后会失真, 背景值可能会有少许差异, 造成 color key 无法 key 掉.

图档宽高则受限于 graphic engine, 需做成 8 的倍数.

 

请使用附档 PhotoRawTrans.exe 将图档转成 YUV raw data, 需选择 “YUV 422 Pack Centered”,

这是为了配合双路的后拉, 因为 65x 后拉是 YUV 输入, 固定为 YUV422 UV-pack format,

所以要设成此 format 才能贴到第二路影片上.

 

转出来后, 会有 XXX_Y_422.raw, XXX_UVP_422.raw 两个 raw 檔, 需再转成 C code.

目前还没有整合性的 tool, 所以只好用个小程序去转, 如附檔 JPGTOHEX.exe.

这之前是用来将 JPEG 转成 C code 的, 但其它 binary file 也适用. 不过这是 DOS 版的,

要在 Windows command shell 下执行. 在此亦附上 source code, 这其实很单纯,

只是把 binary 值转成文本文件而已

 

先在 Windows command shell 执行此程序, 如下,



 

若你的 Windows 显示以下 message, 请选择 "略过",



 

由于这是 DOS 版 tool, 檔名需用 8.3 格式, 请先将原本 raw 档名简化, 然后输入档名, 例如,



 

它会在同目录下生成一个 HEX.TXT, 里面就是 C code array 内容, 请把它取代 g_ucWaterMarkY[] 的内容,

g_ucWaterMarkUVPack[] 也如此做.

 

最后要改一下 code 里的 width, height, line-offset 等, 因为转出来的资料只是单纯的 Y & UV data,

没有任何 header 记录影像信息, 所以要手动改一下, 主要是以下蓝字部份要改成和 logo 大小相符.

 

背景色部份, 我们 sample code 是设定为 WATERLOGO_FILL_COLOR, 即不透明,

客户若要用 color key, 请将红字部份设为背景 YUV 值, 格式是 0x00UUVVYY.

例如背景为白色, color key 即为 0x008181FF (理论上应该是 0x008080FF,

但不知为何 PhotoRawTrans.exe 转出来的是 0x008181FF…)

 

const WATERLOGO_BUFFER g_WaterLogo =

{

    WATERLOGO_AUTO_POS,                 // x position

    WATERLOGO_AUTO_POS,                 // y position

   160,                                // width

   48,                                 // height

    (UINT32)g_ucWaterMarkY,             // Y address

    (UINT32)g_ucWaterMarkUVPack,        // UV address

   160,                                // Y line offset

    GX_IMAGE_PIXEL_FMT_YUV422_PACKED,   // YUV format; must be YUV422 UV-packed!

   0x008181FF                          // color key

    //WATERLOGO_FILL_COLOR              // color key: fill all data

};