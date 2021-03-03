//
//  CookDiffPrice.h
//  Foodtruck
//
//  Created by Uji Saori on 2021-03-02.
//  Copyright © 2021 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"

NS_ASSUME_NONNULL_BEGIN

// Adopt Delegator Protocol and change implementation of 'foodTruck' in order to behaive differently
@interface CookDiffPrice : NSObject <FoodTruckDelegate>

-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;

@end

NS_ASSUME_NONNULL_END
