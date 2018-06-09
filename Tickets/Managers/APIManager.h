//
//  APIManager.h
//  Tickets
//
//  Created by Денис on 06.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "City.h"
#import "MainViewController.h"

#define AirlineLogo(iata) [NSURL URLWithString:[NSString stringWithFormat:@"https://pics.avs.io/200/200/%@.png", iata]];

@interface APIManager : NSObject

+ (instancetype)sharedInstance;
- (void)cityForCurrentIP:(void (^)(City *city))completion;
- (void)ticketsWithRequest:(SearchRequest)request withCompletion:(void (^)(NSArray *tickets))completion;
- (void)mapPricesFor:(City *)origin withCompletion:(void (^)(NSArray *prices))completion;
- (BOOL)isToken;

@end

