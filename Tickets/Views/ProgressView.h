//
//  ProgressView.h
//  Tickets
//
//  Created by Денис on 08.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProgressView : UIView

+ (instancetype)sharedInstance;
- (void)show:(void (^)(void))completion;
- (void)dismiss:(void (^)(void))completion;

@end
