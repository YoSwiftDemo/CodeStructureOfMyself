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
    控制中心层：
    API管理中心：
    数据管理中心：
    UI：
    扩展：
    测试资源：
4.代码内部：
    #prama mark -申明属性
    #prama mark -subViewS  layout
    #prama mark -viewWillAppear
    #prama mark - viewDidAppear
    做Notification的监听之类的事情  listenerAndOther   增加监听等
    #prama mark -life cycle
    控制生命周期区域
    #prama mark -viewDidLoad
    只做addSubview的事情 。xib下这块基本上木有一行代码
    #pragma mark-system  delegate
    实现系统代理区域
    #pragma mark- custom  delegate
    自定义代理区域
    #pragma mark -evebt response
    事件响应区域
    #pragma mark -public  methods
    公有方法区域
    #pragma mark -private methods
    私人方法区域
    #pragma mark -getters and setters
    属性的初始化，则交给getter去做
5.代码注释
    h里简单注释  ：
    @brief         方法作用简单说明
    @discusson 一般是情况分类或需要注意问题
    @ use          指明 大致在什么逻辑或具体哪个类哪里用到这个方法
    m文件基本注释很详细
    @brief
    @@prama      参数最好注释下。有时候比如superViewControlelr最好指明是哪个类，特别是互动直播 逻辑层和UI层我就混了一次。改完，心都碎了
    @discusson
    @discusson
    @ use
    @ return

#endif /* Header_h */
