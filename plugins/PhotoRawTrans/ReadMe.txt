        ��������ˮӡlogo���ߵ��÷���

 

 

 

Water logo ͼ�������� JPEG or bmp, ��������Ҫ͸��ɫ (color key), ������ bmp ����,

�� JPEG ѹ�����ʧ��, ����ֵ���ܻ����������, ��� color key �޷� key ��.

ͼ������������� graphic engine, ������ 8 �ı���.

 

��ʹ�ø��� PhotoRawTrans.exe ��ͼ��ת�� YUV raw data, ��ѡ�� ��YUV 422 Pack Centered��,

����Ϊ�����˫·�ĺ���, ��Ϊ 65x ������ YUV ����, �̶�Ϊ YUV422 UV-pack format,

����Ҫ��ɴ� format ���������ڶ�·ӰƬ��.

 

ת������, ���� XXX_Y_422.raw, XXX_UVP_422.raw ���� raw �n, ����ת�� C code.

Ŀǰ��û�������Ե� tool, ����ֻ���ø�С����ȥת, �總�n JPGTOHEX.exe.

��֮ǰ�������� JPEG ת�� C code ��, ������ binary file Ҳ����. �������� DOS ���,

Ҫ�� Windows command shell ��ִ��. �ڴ��฽�� source code, ����ʵ�ܵ���,

ֻ�ǰ� binary ֵת���ı��ļ�����

 

���� Windows command shell ִ�д˳���, ����,



 

����� Windows ��ʾ���� message, ��ѡ�� "�Թ�",



 

�������� DOS �� tool, �n������ 8.3 ��ʽ, ���Ƚ�ԭ�� raw ������, Ȼ�����뵵��, ����,



 

������ͬĿ¼������һ�� HEX.TXT, ������� C code array ����, �����ȡ�� g_ucWaterMarkY[] ������,

g_ucWaterMarkUVPack[] Ҳ�����.

 

���Ҫ��һ�� code ��� width, height, line-offset ��, ��Ϊת����������ֻ�ǵ����� Y & UV data,

û���κ� header ��¼Ӱ����Ϣ, ����Ҫ�ֶ���һ��, ��Ҫ���������ֲ���Ҫ�ĳɺ� logo ��С���.

 

����ɫ����, ���� sample code ���趨Ϊ WATERLOGO_FILL_COLOR, ����͸��,

�ͻ���Ҫ�� color key, �뽫���ֲ�����Ϊ���� YUV ֵ, ��ʽ�� 0x00UUVVYY.

���米��Ϊ��ɫ, color key ��Ϊ 0x008181FF (������Ӧ���� 0x008080FF,

����֪Ϊ�� PhotoRawTrans.exe ת�������� 0x008181FF��)

 

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