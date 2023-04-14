#include "Framework.h"

class MyWindow : public Window {
    /*构造Window的派生类MyWindow，使其：
    1. 处理键盘或鼠标的消息时，在屏幕上显示相关的提示信息
    2. 对象销毁时在屏幕上显示相关的提示信息*/

};

class MyApp : public Application {
    /*构造Application的派生类MyApp，使其：
    1. 初始化时创建MyWindow类型的窗口对象，而非Window类型的窗口对象
    2. 处理退出消息时，在屏幕上显示相关的提示信息*/
};

MyApp _my_app;