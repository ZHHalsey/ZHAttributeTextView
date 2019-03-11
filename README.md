# ZHAttributeTextView
富文本实现 > ZHAttributeTextView类 实现富文本个别字能够点击

1 > 导入类 'ZHAttributeTextView'

2 > 然后在需要实现的地方 #import "ZHAttributeTextView.h"

3 > 创建对象, 并且设置属性 (可以把下面代码拷贝到你需要实现的地方)

ZHAttributeTextView *myTextView = [[ZHAttributeTextView alloc]initWithFrame:CGRectMake(10, 300, self.view.bounds.size.width - 20, 50)];

myTextView.numClickEvent = 2;                       // 有几个点击事件(只能设为1个或2个)

myTextView.oneClickLeftBeginNum = 7;         // 第一个点击的起始坐标数字是几

myTextView.oneTitleLength = 12;                    // 第一个点击的文本长度是几

myTextView.twoClickLeftBeginNum = 19;      // 第二个点击的起始坐标数字是几

myTextView.twoTitleLength = 11;                   // 第二个点击的文本长度是几

myTextView.fontSize = 14;                             // 可点击的字体大小

// 设置了上面后要在最后设置内容

myTextView.content = @"我已阅读并接受《XXXX注册服务协议》《XXXX风险提示书》";

myTextView.agreeBtnClick = ^(UIButton *btn) {

btn.selected = !btn.selected;

if(btn.selected == YES){

NSLog(@"左侧按钮选中状态为YES");

}else{

NSLog(@"左侧按钮选中状态为NO");

}

};

myTextView.eventblock = ^(NSAttributedString *contentStr) {

NSLog(@"点击了富文本--%@", contentStr.string);

};

[self.view addSubview:myTextView];
