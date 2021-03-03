//
//  main.m
//  FoodTruck
//
//  Copyright © 2016 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"
#import "Cook.h"
#import "CookDiffPrice.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        FoodTruck *truckA = [[FoodTruck alloc] initWithName:@"Take a Bao" andFoodType:@"bao"];
        
        FoodTruck *truckB = [[FoodTruck alloc] initWithName:@"Tim Shortons" andFoodType:@"shortbread"];
        
        
        // Task F: connect Delegator and Delegate
        Cook *cook = [[Cook alloc] init];
        NSLog(@"----- Delegate 1: fixed price -----");
        truckA.delegate = cook;
        truckB.delegate = cook;        
        [truckA serve:10];
        [truckA cashOut];
        [truckB serve:5];
        [truckB cashOut];
        
        // Another Delegate: change price depends on Food
        CookDiffPrice *cookDiff = [[CookDiffPrice alloc] init];
        NSLog(@"");
        NSLog(@"----- Delegate 2: diff price -----");
        truckA.delegate = cookDiff;
        [truckA serve:10];
        [truckA cashOut];
        truckB.delegate = cookDiff;
        [truckB serve:5];
        [truckB cashOut];
    }
    return 0;
}
