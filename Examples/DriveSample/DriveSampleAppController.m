
#import "DriveSampleWindowController.h"

@interface      DriveSampleAppController : NSObject @end
@implementation DriveSampleAppController

- (void) applicationWillFinishLaunching:(NSNotification*)n {

  [DriveSampleWindowController.sharedWindowController showWindow:self];
}

- (BOOL) applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)x { return YES; }

@end


int main(int argc, char *argv[]) { return NSApplicationMain(argc,  (const char **) argv); }
