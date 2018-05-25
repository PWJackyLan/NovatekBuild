#ifndef LIBUILAYOUT_H
#define LIBUILAYOUT_H
#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"


typedef struct _WOEKMEM_RANGE
{
    UINT32 Addr;    ///< Memory buffer starting address
    UINT32 FixSize; ///< Memory buffer size
    volatile UINT32 Size;
    volatile UINT32 Offset;
    BOOL   bDelAddr;
    UINT32 ObjPos;
} WORKMEM_RANGE, *PWORKMEM_RANGE;

typedef struct 
{
	VControl *pCtrl;
	char *pResC;
	char *pCtrlBin;
}UILAYOUT_CTRL_INFO;


extern void UILayout_OnSaveInit(VControl *pCtrl, WORKMEM_RANGE *pPageMem);
extern void UILayout_OnCreatRes(VControl *pCtrl,char *pFilePath);
extern void UILayout_OnLoadInit(WORKMEM_RANGE *pWorkMemInfo);

extern void UILayout_OnGetCtrl(CHAR *pName,EVENT_ENTRY *pEventList,VControl *pCtrl);

extern void UILayout_OnCreatMemory(WORKMEM_RANGE *pMemInfo,UINT32 Size);
extern void UILayout_OnFreeMemory(WORKMEM_RANGE *pMemInfo);
extern void UILayout_OnResetMemory(WORKMEM_RANGE *pMemInfo);
extern void UILayout_OnWriteMemory(WORKMEM_RANGE *pMemInfo,char *pFilePath);
extern int  UILayout_OnCommBinCtrl(UILAYOUT_CTRL_INFO *pCtrlList,int count,char *pSavePath);
extern int  UILayout_OnCommBinOther(char *pList[],int count,char *pSavePath);

extern void UILayoutHash_OnInit(void);
extern void UILayoutHash_OnSetConfig(int cfg,int Data);
extern int  UILayoutHash_OnGetConfig(int cfg);
extern void UILayoutHash_OnAddItem(char *pKey,long uiDataAddr);
extern long UILayoutHash_OnGetItem(char *pKey);


#endif // LIBUILAYOUT_H
