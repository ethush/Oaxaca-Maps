//
//  ViewController.h
//  Oaxaca-Maps
//
//  Created by Walter Gonzalez Domenzain on 08/02/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreLocation/CoreLocation.h>
#import <GoogleMaps/GoogleMaps.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate, GMSMapViewDelegate>

@property (strong, nonatomic) CLLocationManager     *locationManager;
@property (strong, nonatomic) CLLocation            *location;
@property (strong, nonatomic) IBOutlet UIView *viewMap;

@property (strong, nonatomic) IBOutlet UIButton *btnMap;
- (IBAction)btnMapPressed:(id)sender;


@end

