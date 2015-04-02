
#ifndef _SLFMATH_H_
#define _SLFMATH_H_

int mtxCpy(double *pMtx1,double *pMtx2,int row,int col);
/* ������pMtx2������pMtx1, row��ʾ��������� */
/* col��ʾ�����������������Ϊ0�����ʾʸ������ */

int mtxMtp(double *pMtx0,double *pMtx1,int row1,int col1,double *pMtx2,int row2,int col2);
/* ����pMtx1��pMtx2, ����Ľ������pMtx0���ú���Ҳ�ʺϾ����ʸ����������ʸ��������˷� */

double norm(double *pMtx0,int cnt);
/* ��ȡ������ģ */

void mtxAdd(double *pMtx0,double *pMtx1,double *pMtx2,int row,int col);
/* ������� */

void VecCross(double *pMtx0,double *pMtx1,double *pMtx2);
/* ʸ���˷� */

void mtxT(double *pMtx0,double *pMtx1,int row,int col);
/* ����ת�� */

void mtxSub(double *pMtx0,double *pMtx1,double *pMtx2,int row,int col);
/* ������� */

double mtxDet(double *pMtx0,int n);
/* ��������ʽ */

void mtxInv(double *pMtx0,double *pMtx1,int n);
/* ������ */

#endif