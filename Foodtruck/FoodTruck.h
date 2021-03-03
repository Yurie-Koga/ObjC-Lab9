//
//  FoodTruck.h
//  FoodTruck
//.
//  Copyright © 2016 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

/// this is Delegator class
@class FoodTruck;

// Task A: Delegator Protocol
@protocol FoodTruckDelegate <NSObject>

-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;

@end


@interface FoodTruck : NSObject

// Task B: Delegate Property
@property (nonatomic, weak) id<FoodTruckDelegate> delegate;

-(instancetype)initWithName:(NSString *)pun andFoodType:(NSString *)foodType;

-(void)serve:(int)orders;
-(void)cashOut;

@end
