//
//  LBNCChartCell.h
//  LBNewsComing
//
//  Created by liubo on 2017/8/20.
//  Copyright © 2017年 刘博. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LBNCChartModel;
@interface LBNCChartCell : UITableViewCell
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@property (nonatomic, strong)LBNCChartModel *chartModel;
@end
