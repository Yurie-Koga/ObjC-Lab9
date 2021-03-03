//
//  Cook.h
//  Foodtruck
//
//  Created by Uji Saori on 2021-03-02.
//  Copyright © 2021 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"

NS_ASSUME_NONNULL_BEGIN

/// this is Delegate class

// Task D: Adopt Protocol
@interface Cook : NSObject <FoodTruckDelegate>

// Task E: Delegate to Protocol
-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;

@end

NS_ASSUME_NONNULL_END
