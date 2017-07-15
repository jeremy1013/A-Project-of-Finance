//
//  BINExpenseViewController.h
//  MyFinance
//
//  Created by bin on 14-2-5.
//  Copyright (c) 2014年 bin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYPieChart.h"

@interface BINExpenseViewController : UIViewController <XYPieChartDelegate, XYPieChartDataSource>

@property (strong,nonatomic) NSMutableArray *expense;

@property (strong,nonatomic) NSMutableArray *slices;
@property (strong,nonatomic) NSArray        *sliceColors;

@property (weak, nonatomic) IBOutlet XYPieChart *pieChart;
@property (weak, nonatomic) IBOutlet UILabel *selectName;
@property (weak, nonatomic) IBOutlet UILabel *selectTotal;
@property (weak, nonatomic) IBOutlet UILabel *selectPercent;
@property (weak, nonatomic) IBOutlet UIImageView *showDetailPic;

- (void)setData: (NSMutableArray *) expenseData setState:(BOOL) fileExist;


@end
