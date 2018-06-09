//
//  Extensions.m
//  Tickets
//
//  Created by Денис Львович on 09.06.18.
//  Copyright © 2018 Денис. All rights reserved.
//

#import "Extensions.h"

@implementation NSString (Localize)

- (NSString *)localize {
    
    return NSLocalizedString(self, "");
}

@end
