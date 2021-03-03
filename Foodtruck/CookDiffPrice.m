//
//  CookDiffPrice.m
//  Foodtruck
//
//  Created by Uji Saori on 2021-03-02.
//  Copyright © 2021 Lighthouse Labs. All rights reserved.
//

#import "CookDiffPrice.h"

@implementation CookDiffPrice

-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food
{
    if([[food lowercaseString] isEqualToString:@"bao"]) {
        return 333.33;
    } else {
        return 100.00;
    }
}

@end
