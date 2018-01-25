/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : oal_gpio.h
  版 本 号   : 初稿
  作    者   : 邹嵘
  生成日期   : 2014年4月1日
  最近修改   :
  功能描述   : 和工作平台相关的GPIO接口封装。需用预编译宏控制
  函数列表   :
  修改历史   :
  1.日    期   : 2014年4月1日
    作    者   : 邹嵘
    修改内容   : 创建文件

******************************************************************************/

#ifndef __OAL_WINDOWS_GPIO_H__
#define __OAL_WINDOWS_GPIO_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  10 函数声明
*****************************************************************************/
/*****************************************************************************
 函 数 名  : oal_config_gpio_pin
 功能描述  : 用于配置GPIO管脚的状态
 输入参数  : UINT32 ulGPIOPinBits
             UINT8 ucInOut
             UINT8 ucGPIOType
 输出参数  : 无
 返 回 值  : INT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_config_gpio_pin(oal_uint32 ulGPIOBaseAddr, oal_uint32 ulGPIOPinBits, oal_uint8 ucInOut, oal_uint8 ucGPIOType)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : oal_set_gpio_level
 功能描述  : 拉高、拉低对应GPIO管脚的电平，需要保证相应的GPIO为普通GPIO，而
             非中断
 输入参数  : UINT32 ulGpioBit, UINT8 ucLevel
 输出参数  : 无
 返 回 值  : INT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_set_gpio_level(oal_uint32 ulGPIOBaseAddr, oal_uint32 ulGpioBit, oal_uint8 ucLevel)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : oal_set_gpio_trigger_type
 功能描述  : 设置GPIO中断的触发方式
 输入参数  : UINT32 ulGpioBit,UINT8 ucTrigTypeLevelEdge, UINT8 ucTrigTypeHighLow
 输出参数  : 无
 返 回 值  : INT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_set_gpio_trigger_type(oal_uint32 ulGPIOBaseAddr, oal_uint32 ulGpioBit, oal_uint8 ucTrigTypeLevelEdge, oal_uint8 ucTrigTypeHighLow)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : oal_get_gpio_level
 功能描述  : 获取指定GPIO管脚的当前电平
 输入参数  : UINT32 ulGpioBit
 输出参数  : 无
 返 回 值  : UINT8 *ucLevel
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_get_gpio_level(oal_uint32 ulGPIOBaseAddr, oal_uint32 ulGpioBit, oal_uint8 *ucLevel)
{
    return 0;
}
/*****************************************************************************
 函 数 名  : oal_clear_gpio_int
 功能描述  : 清除指定中断
 输入参数  : UINT32 ulGPIOBit
 输出参数  : 无
 返 回 值  : INT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_clear_gpio_int(oal_uint32 ulGPIOBaseAddr, oal_uint32 ulGPIOBit)
{
    return 0;
}

/*****************************************************************************
 函 数 名  : oal_debounce_gpio_int
 功能描述  : 改善指定GPIO管脚的抖动
 输入参数  : UINT32  ulGPIOBit
 输出参数  : 无
 返 回 值  : INT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年12月2日
    作    者   : z00299054
    修改内容   : 新生成函数

*****************************************************************************/
OAL_STATIC OAL_INLINE oal_int32 oal_debounce_gpio_int(oal_uint32 ulGPIOBaseAddr, oal_uint32  ulGPIOBit, oal_uint8 ucDebounceType)
{
    return 0;
}

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of oal_ext_if.h */
