/*************************************************************************************
** �ļ�: onexit.h
**
** ˵��: �˳����̴���
**
** ����: Jun
**
** ʱ��: 2010-7-5
*************************************************************************************/
#ifndef FAMES_ON_EXIT_H
#define FAMES_ON_EXIT_H

/*------------------------------------------------------------------------------------
 *      OnExitģ��֧��, 1=֧��, 0=��֧��
**----------------------------------------------------------------------------------*/
#define FAMES_ON_EXIT_EN 1           

/*------------------------------------------------------------------------------------
 *      OnExit���̵�������
**----------------------------------------------------------------------------------*/
#define ON_EXIT_NUM     32

typedef void (*onexit_func)(void); /* OnExit�������� */

/*------------------------------------------------------------------------------------
 *      ��������
**----------------------------------------------------------------------------------*/
#if FAMES_ON_EXIT_EN == 1

void apical InitializeOnExit(void);
BOOL apical RegisterOnExit(onexit_func);
BOOL apical DeregisterOnExit(onexit_func);
void apical ProcessOnExit(void);

#else

#define InitializeOnExit()
#define RegisterOnExit(x)
#define DeregisterOnExit(x)
#define ProcessOnExit()

#endif  /* #if FAMES_ON_EXIT_EN == 1 */

#endif  /* #ifndef FAMES_ON_EXIT_H   */
/*====================================================================================
 * 
 * ���ļ�����: onexit.h
 * 
**==================================================================================*/

