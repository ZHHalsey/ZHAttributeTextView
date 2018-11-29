//
//  ZHAttributeTextView.h
//  ZHAttributeTextView
//
//  Created by ZH on 2018/9/18.
//  Copyright © 2018年 张豪. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef void(^eventBlock)(NSAttributedString *contentStr);
typedef void(^leftAgreeBtnBlock)(UIButton *btn);

@interface ZHAttributeTextView : UIView <UITextViewDelegate>
@property (nonatomic, strong)UIButton *leftAgreeBtn;            // 左侧同意按钮
@property (nonatomic, strong)UITextView *myTextView;
@property (nonatomic, assign)int numClickEvent;                 // 内容里面有几个点击事件
@property (nonatomic, assign)int fontSize;                      // 可点击的字体大小
@property (nonatomic, assign)int oneClickLeftBeginNum;          // 第一个点击的起点
@property (nonatomic, assign)int oneTitleLength;                // 第一个点击长度
@property (nonatomic, assign)int twoClickLeftBeginNum;          // 第二个点击的起点
@property (nonatomic, assign)int twoTitleLength;                // 第二个点击长度
@property (nonatomic,copy)UIColor *titleTapColor;               // 可点击富文本字体颜色
@property (nonatomic, strong)NSString *content;                 // 内容
@property (nonatomic, strong)eventBlock eventblock;             // 内容点击事件
@property (nonatomic, strong)leftAgreeBtnBlock agreeBtnClick;   // 左侧按钮点击事件

@end
