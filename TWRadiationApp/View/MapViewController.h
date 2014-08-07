//
//  RadiatonMapViewController.h
//  TWRadiationApp
//
//  Created by Kent Huang on 2014/4/19.
//  Copyright (c) 2014年 g0v.tw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface RadiatonMapViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate> //<UIWebViewDelegate>
{
    CLLocationManager *locationManager;
    IBOutlet MKMapView *mapView;
    IBOutlet UILabel* currentAddress;
    IBOutlet UIActivityIndicatorView *loadingIndicator;
    //    IBOutlet UIWebView *webView;
}

- (IBAction)pushUpdateAddressButton:(id)sender;

@end
