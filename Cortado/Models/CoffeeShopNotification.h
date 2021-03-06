@import UIKit;
@import CoreLocation;

extern NSString * const NotificationActionCustom;
extern NSString * const NotificationActionDrink;
extern NSString * const NotificationCategoryBeverage;

@class DrinkConsumption;
@class Preferences;

@interface CoffeeShopNotification : NSObject

+ (void)registerNotificationTypeWithPreferences:(Preferences *)preferences;

@property (readonly) NSString *name;
@property (readonly) CLLocationCoordinate2D coordinate;
@property (readonly, weak) UIApplication *application;

@property (readonly) UILocalNotification *notif;

- (id)initWithName:(NSString *)name
        coordinate:(CLLocationCoordinate2D)coordinate;

@end
