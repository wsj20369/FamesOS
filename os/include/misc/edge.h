/***********************************************************************************************
 * �ļ�:    edge.h
 *
 * ˵��:    ���ر仯״̬
 *
 * ����:    Jun
 *
 * ʱ��:    2010-12-20
***********************************************************************************************/
#ifndef FAMES_MISC_EDGE_H
#define FAMES_MISC_EDGE_H

/*----------------------------------------------------------------------------------------------
 * 
 *      ��: ���������½���
 *
 * var_up��var_dn������״̬�Ĵ������, 0=��������, 1=�Ѿ�����, ���Գ�ʼ��ʱ��ӦΪ0
**--------------------------------------------------------------------------------------------*/

#define edge_up(var, var_up) ( (var)?((!(var_up))?((var_up)=1,1):(0)):((var_up)=0,0))

#define edge_dn(var, var_dn) (!(var)?((!(var_dn))?((var_dn)=1,1):(0)):((var_dn)=0,0))




#endif /* #ifndef FAMES_MISC_EDGE_H */
/*==============================================================================================
 * 
 * ���ļ�����: edge.h
 * 
**============================================================================================*/
