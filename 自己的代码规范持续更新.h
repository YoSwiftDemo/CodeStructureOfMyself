//
//  Header.h
//  SuperPoweredAudioMusicPlay
//
//  Created by 岳克奎 on 16/12/24.
//  Copyright © 2016年 岳克奎. All rights reserved.
//

#ifndef Header_h
#define Header_h


#prama mark - 代码结构与规范（还在整理中）

1.主界面，比如音乐功能展示ViewControlelr，要分2个子ViewControlelr分别去管理UI&&Logic。
    在看博客的时候，看到关于剥离逻辑层的说法，现在感觉还是自己试着写写诗很必要的。
2.不管是创建View还是ViewControelr，都同统一执行＋方法，传入俯视图，保证与自己相关的代码都
   写在自己屁股后面，加载的时候，记着让模块管理中心控制加载，绕一圈，后期写完你就知道好处大大的好
3 代码外部：
    总头文件：
    控制中心层：   目前是写成single
    API管理中心：  代码千万别嫩成胖model。代每个模块应该有自己的API层，比如悬浮直播和音乐 毛线关系木有，API要分开，要分家！
    数据管理中心：  音乐模块包含了LRC 数据 数据源的处理 包括对mdoel的升级扩展
    UI：
    扩展：       主要是xib动态桥接 处理View    发现xib动态桥接简直是神器！
    测试资源：
    Model
    LRC 相关 ： 为什么把他单独拿出来，因为我们是双行（上下行）歌词  类似KTV 模式，关于LRC自己相关的东西 放在自个m文件的+方法里，不要乱放。通过调度中心去交互，也不要乱交互，绕道调度中心。
    等等
4.//代码内部：
    #prama mark -申明属性

    做Notification的监听之类的事情  listenerAndOther   增加监听等
    #prama mark -life cycle
    控制生命周期区域
    #prama mark -viewDidLoad
    只做addSubview的事情 。xib下这块基本上木有一行代码
    #pragma mark-system  delegate
    实现系统代理区域
    #pragma mark- myself  delegate
    自定义代理区域
    #pragma mark -event response
    事件响应区域
    #pragma mark -public  methods
    公有方法区域
    #pragma mark -private methods
    私人方法区域
    #pragma mark -getters and setters
    属性的初始化，则交给getter去做

  /*
   自己目前用的排列顺序这样：
   life cycle-> viewDidLoad-> public methods->+方法-->private methods->-event response-> -getters and setters
   +方法应该归属于public
   */

5.//代码注释
    h文件简单注释
    m 文件越详细越好

    h里简单注释  ：
    @brief         方法作用简单说明
    @discusson 一般是情况分类或需要注意问题
    @ use          指明 大致在什么逻辑或具体哪个类哪里用到这个方法
    m文件基本注释很详细
    @brief
    @prama      参数最好注释下。有时候比如superViewControlelr最好指明是哪个类，特别是互动直播 逻辑层和UI层我就混了一次。改完，心都碎了
    @Function
    @ use
    @ return
6.//代码完成差不多 才去写下思维导图。

#endif /* Header_h */
