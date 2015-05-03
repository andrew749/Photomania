//
//  Photographer+Create.h
//  Photomania
//
//  Created by Andrew Codispoti on 2015-01-01.
//  Copyright (c) 2015 Andrew Codispoti. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)
+(Photographer *)photographerWithName:(NSString *)name inManagedObjectContext:(NSManagedObjectContext *)context;
@end
