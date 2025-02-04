#ifndef lock_h
#define lock_h

/*=============================================================
库说明文档：          lock.h
   版本：		v2019_A_01
   更新： 无
   功能： 使用锁来保证 数据资源访问、流程执行 的原子性
          -- 资源读写保护，一个程序占用了一个资源，另一个程序只能在它释放资源后才能读写
          -- 流程互斥，一个流程不能打断另一个流程的执行（优先级抢占）
          
   内容： 数据类型 + 对外变量 + 函数 
   环境： 单片机
   依赖： 库 / os / 其他
   限制： 功能限制、性能限制、参数限制 ……
   可改进点：
   使用注意事项： 重入 / 资源保护 / 存储保护 /条件判断
 ==============================================================*/

//==============================================================
//	依赖关系：
//==============================================================

    #include "typedef.h"

//==============================================================
//	数据结构类型定义
//==============================================================
    
    typedef struct{
        uint8 value1;
        uint8 value2;
    }type_mylock;

    //读取是否上锁，如果没有上锁，则上锁，并返回1
    //             
    uint8 read_and_lock(type_mylock* lock);
    
    //解锁，释放资源的访问权，或解除流程互锁
    uint8 unlock(type_mylock* lock);
    
//==============================================================
//	对外数据声明
//==============================================================

//==============================================================
//	API
//==============================================================



//======================= END ==============================
#endif

