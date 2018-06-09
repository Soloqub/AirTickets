//
//  TicketTableViewCell.h
//  Tickets
//
//  Created by Денис on 06.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import "DataManager.h"
#import "APIManager.h"
#import "Ticket.h"
#import "FavoriteTicket+CoreDataClass.h"

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) Ticket *ticket;
@property (nonatomic, strong) FavoriteTicket *favoriteTicket;
@property (nonatomic, strong) UIImageView *airlineLogoView;

@end
