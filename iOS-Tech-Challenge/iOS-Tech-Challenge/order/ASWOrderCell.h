//
//  ASWOrderCell.h
//  iOS-Tech-Challenge
//
//  Created by LaiKuan Wen on 2015/9/19.
//  Copyright © 2015年 AKI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ParseAPI.h"

@interface ASWOrderCell : UITableViewCell

- (void) aswUpdateWithDictionary:(PFObject *)dictionary;
@end
