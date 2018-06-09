//
//  CoreDataHelper.h
//  Tickets
//
//  Created by Денис Львович on 08.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "DataManager.h"
#import "FavoriteTicket+CoreDataClass.h"
#import "Ticket.h"

@interface CoreDataHelper : NSObject

+ (instancetype)sharedInstance;
- (BOOL)isFavorite:(Ticket *)ticket;
- (NSArray *)favorites;
- (void)addToFavorite:(Ticket *)ticket;
- (void)removeFromFavorite:(Ticket *)ticket;

@end
