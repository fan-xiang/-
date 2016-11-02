//
//  WEChatTableViewCell.m
//  微信菜单栏
//
//  Created by 可米小子 on 16/11/2.
//  Copyright © 2016年 可米小子. All rights reserved.
//

#import "WEChatTableViewCell.h"

@implementation WEChatTableViewCell

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    if (self == [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self setTabelCellView];
    }

    return self;

}
- (void)setTabelCellView {
    self.backgroundColor = [UIColor clearColor];
    self.textLabel.font = [UIFont systemFontOfSize:12];
    self.textLabel.textColor = [UIColor whiteColor];
    self.selectionStyle = UITableViewCellSelectionStyleNone;
}

-(void)setModel:(WEChatModel *)model {
    _model = model;
    self.imageView.image = [UIImage imageNamed:model.imageName];
    self.textLabel.text = model.itemName;
}


- (void)awakeFromNib {
    [super awakeFromNib];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
