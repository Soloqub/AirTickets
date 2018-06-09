//
//  MainViewController.h
//  Tickets
//
//  Created by Денис on 23.04.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef struct SearchRequest {
    __unsafe_unretained NSString *origin;
    __unsafe_unretained NSString *destionation;
    __unsafe_unretained NSDate *departDate;
    __unsafe_unretained NSDate *returnDate;
} SearchRequest;

@interface MainViewController : UIViewController

@end

