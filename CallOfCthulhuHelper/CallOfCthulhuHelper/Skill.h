//
//  Skill.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 12.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Creature, Investigator;

@interface Skill : NSManagedObject

@property (nonatomic, retain) NSString * base;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSNumber * isDefault;
@property (nonatomic, retain) NSNumber * isImproved;
@property (nonatomic, retain) NSNumber * isWeapon;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) Investigator *skillOf;
@property (nonatomic, retain) Creature *skillOfCreature;

@end
