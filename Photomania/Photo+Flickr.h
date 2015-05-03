//
//  Photo+Flickr.h
//  Photomania
//
//  Created by Andrew Codispoti on 2015-01-01.
//  Copyright (c) 2015 Andrew Codispoti. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)
+(Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary inManagedObjectContext:(NSManagedObjectContext *) context;
+(void)loadPhotosFromFlickrArray:(NSArray *) photos intoManagedObjectContext:(NSManagedObjectContext *)context;
@end
