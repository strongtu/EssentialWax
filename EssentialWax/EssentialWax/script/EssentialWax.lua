require("mobdebug").start()

waxClass {"EssentialWax", protocols = {"UIApplicationDelegate"}}

function applicationDidFinishLaunching(self, application)
local frame = UIScreen:mainScreen():bounds()
self.window = UIWindow:initWithFrame(frame)
self.window:setBackgroundColor(UIColor:colorWithRed_green_blue_alpha(0.545, 0.0, 1, 1))

local label = UILabel:initWithFrame(CGRect(0, 100, 320, 35))
label:setFont(UIFont:boldSystemFontOfSize(30))
label:setColor(UIColor:whiteColor())
label:setBackgroundColor(UIColor:colorWithRed_green_blue_alpha(0.545, 0.3, 1, 1))
label:setText("前方高能：")
label:setTextAlignment(UITextAlignmentCenter)

local label1 = UILabel:initWithFrame(CGRect(0, 135, 320, 35))
label1:setFont(UIFont:boldSystemFontOfSize(25))
label1:setColor(UIColor:whiteColor())
label1:setBackgroundColor(UIColor:colorWithRed_green_blue_alpha(0.545, 0.3, 1, 1))
label1:setText("WoodyPlus正在调用Lua")
label1:setTextAlignment(UITextAlignmentCenter)

self.window:addSubview(label)
self.window:addSubview(label1)

self.window:makeKeyAndVisible()

puts("")
puts("-------------------------------------------------")
puts("- You can print stuff to the console like this! -")
puts("-------------------------------------------------")
end