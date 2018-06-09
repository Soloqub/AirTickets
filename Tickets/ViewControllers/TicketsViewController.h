//
//  TicketsViewController.h
//  Tickets
//
//  Created by Денис on 06.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TicketsViewController : UITableViewController

- (instancetype)initWithTickets:(NSArray *)tickets;
- (instancetype)initFavoriteTicketsController;

@end
