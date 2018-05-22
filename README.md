# Unreal Engine Developer Course - Section 3 - Building Escape

This is the [Unreal Engine Developer]( http://gdev.tv/urcgithub) course – it started as a runaway success on Kickstarter and has gone on to become one of the bestselling Unreal courses on the internet! Continually updated in response to student suggestions, you will benefit from the fact we have already taught over 360,336 students game development, many shipping commercial games as a result.

You're welcome to download, fork or do whatever else legal with all the files! The real value is in our huge, high-quality online tutorials that accompany this repo. You can check out the course here: [Unreal Engine Developer]( http://gdev.tv/urcgithub)

## In This Section

### 1 Intro, Notes & Section 3 Assets ###

+ Welcome to our first Unreal editor section.
+ You’ll learn simple level building.
+ We’ll be using meshes and materials.
+ C++ events accessed from Blueprint.
+ Calling C++ code from Blueprint.
+ And much more.

### 2 S03 Game Design Document (GDD) ###

The Concept, Rules and Requirements of our simple game.

### 3 Version Control 101 ###

+ The what and why of Version Control Systems
+ Choosing your Version Control System (VCS)
+ What files to include / exclude
+ Commit = save a local snapshot
+ Reset = roll-back to a previous state
+ Branch, Push and Large File Support later.

### 4 Ignoring Unreal Derived Files ###

+ Derived files can be easily rebuilt
+ Other files (code, assets, level layout etc) can’t
+ Ignore most derived files for version control
+ Which folders to ignore in version control
+ Our starting .gitignore file for Unreal.

### 5 Your First .gitignore for Unreal ###

+ Understand Unreal creates VS projects for us
+ How to re-generate VS project files
+ Writing our first .gitignore file
+ “Committing” our project for the first time.

### 6 Getting to Know Unreal’s Editor ###

+ Why changes to the starter scene aren’t tracked
+ Arranging a simple set of windows
+ Moving around in the 3D Viewport
+ Setting our start map, and committing

### A Pointers Primer ###

+ You’re about to meet pointers for the first time
+ The clue is when you see a **\*** next to a type
+ Pointers are simply memory addresses
+ You have to “follow” the pointer to the object
+ Benefit: saves you from moving things in memory
+ Disadvantage: you can lose control of data.

### 7 Unreal’s Class System ###

+ Introducing the idea of inheritance
+ Unreal’s scarily powerful class system
+ Exploring using the Class Viewer
+ Inheritance for “is a” relationships
+ Components for “has a” relationships.

### 7b Cloning and Building Our Code ###

+ Cloning our project.
+ Checking out a lectures state.
+ How Unreal’s build system works.
+ Diagnosing build system issues.

### 8 Runtime Messages for Feedback ###

+ Using **UE_LOG** to print to the Output Console
+ Printing to the game screen

**Useful Links**
+ [Epic Wiki - Logs, Printing Messages to Yourself During Runtime](https://wiki.unrealengine.com/Logs,_Printing_Messages_To_Yourself_During_Runtime#Related_Tutorial_)

### 9 Accessing Object Names ###

+ Use **GetOwner()** to find the component’s owner
+ **\*AActor** is a pointer to an actor, a new concept
+ Use -**>** to access methods through pointers
+ Use **GetName()** to find the object’s name
+ Use **%s** as a format operator for strings
+ Use **\*** to “dereference” pointers.

### 9b Include What You Use For 4.17+ ###

+ Converting old projects to IWYU.
+ Order of headers with IWYU.
+ Removing monolithic headers.
+ How to find headers.

### 10 Getting Transforms in C++ ###

+ Introducing **FVector**
+ Mixing **.** and **->** to access methods
+ Using multiple format operators
+ Finishing our **PositionReport** component.

### 11 Moving Objects With C++ ###

+ A little more about the editor & temporary actors
+ How to eject yourself from the possessed pawn
+ Snapping objects to the floor (END key)
+ Using the **FRotator** struct to represent rotation
+ Use **SetActorRotation()** to rotate objects.

### 12 Laying Out Geometry ###

+ A brief intro of BSP “vs” Static Meshes
+ Use **Q, W, E** keys to translate, rotate, scale
+ Make good use of grid snapping and quad view
+ Hold **ALT + drag** translate to duplicate an object
+ Hold **L** and double-click for temporary work Light
+ This is fiddly, try letting go of **L** and trying again.

### 13 Applying Materials ###

+ A material is comprised of texture(s) and shader(s)
+ Textures are image files, shaders are GPU code
+ Unreal ships with some impressive examples
+ Unreal has powerful material editing tools
+ Applying materials to our room interior.

### 14 Macros Starting with UPROPERTY ###

+ A macro is a programmed cut-and-paste
+ This happens before the code is compiled
+ Can unlock powerful functionality
+ We don’t get code complete as standard
+ Can also create really weird build errors
+ Expose **ATriggerVolume\*** to the Details window

### 15 Using Trigger Volumes ###

+ A trigger volume is a very versatile tool
+ A 3D volume that detects things entering / leaving
+ We’re going to use one as a pressure plate
+ How we’re going to specify what can open doors
+ Use **IsOverlappingActor()** on **ATriggerVolume**
+ Polling vs using events.

### 16 Unreal’s PlayerController ###

+ We’ve used **GetOwner()** to search “bottom-up”
+ Now let’s use **GetWorld()** to search “top-down”
+ Game Mode specifies the Default Pawn Class
+ The Default Pawn is your “body”, is transient
+ The Player Controller is your “mind”, persist
+ PlayerController class has **GetPawn()**

### 17 Using Collision Volumes ###

+ Collisions volumes are also known as colliders
+ These tell the physics engine what hits what
+ A trigger volume just triggers code
+ A collider actually has physics simulated
+ Exploring how to add collision volumes
+ Prevent players from passing through the door!

### 18 Using GetTimeSeconds() ###

+ Using **GetWord()->GetTimeSeconds()**
+ Making our game highly “play tunable”
+ Re-factoring our code for simplicity
+ Using a spotlight to provide “affordance”
+ Play-testing to ensure the game is annoying!

### 19 Grabbing System Overview ###

+ We want to be able to lift the chair next
+ We’ll add a **Grabber.cpp** component to the player
+ The player is a temporary actor, appears on play
+ The Game Mode sets which Default Pawn to use
+ Create Default Pawn & Game Mode Blueprints
+ Specify our modified Default Pawn.

### 20 Modifying the Default Pawn Actor ###

+ Why Blueprint is helpful in this case
+ How to make a Blueprint from the Default Pawn
+ Note this Blueprint class inherits, an “is a” relation
+ A Blueprint is like a template
+ You make an “instance” in the scene
+ Explore “instantiating” from Blueprint & modifying.

### 21 Inherit Game Mode Blueprint ###

+ “Hard coding” means assets written into code
+ The DefaultPawn_BP is an asset
+ We want to be able to track changes to its name
+ It is convenient to use Blueprint for this purpose
+ Extending our C++ Game Mode with Blueprint
+ Selecting the new DefaultPawn_BP

### 22 Getting Player Viewpoint ###

+ Know where the player is looking
+ Out-parameters can be confusing
+ A way of marking-up out parameters
+ Continuously logging player viewpoint.

### 23 Using DrawDebugLine ###

+ How to add vectors
+ Calculating our line trace end point
+ Using debug functions for visualisation in Unreal
+ Use DrawDebugLine() to visualise the vectors.

### 24 Line Tracing AKA Ray-Casting ###

+ Line tracing (AKA ray casting) is a very useful tool
+ Imagine we shine a virtual laser into the world
+ We can use different view modes to visualise
+ Simulating physics sets the object channel.

### 25 LineTraceSingleByObjectType() ###

+ Meet references for the first time
+ LineTraceSingle may be deprecated
+ Build params inc. FCollisionQueryParams

### 26 REFERENCES & POINTERS ###

+ How references and pointers compare
+ How to perform common operations in both
+ What the & and * symbols means in context
+ Challenge: Repoint and Rewrite
+ When to use references over pointers?

### 27 Resetting Your Unreal Project ###

+ What to do if your Unreal solution keeps crashing
+ How to delete all temporary files
+ The order in which to reset things

### 28 Using FindComponentByClass() ###

+ What FindComponentByClass() does
+ How to use it to find attached components
+ Introducing angle brackets <> for generics
+ Use nullptr to initialise your pointers
+ Log a useful error if the component isn’t attached.

### 29 Introducing Input Binding ###

+ Settings > Project Settings > Engine > Input
+ Action mappings are used for on / off actions
+ Axis mappings are used for analog values
+ You can give players a way or re-mapping
+ Many keys can bind to one action
+ How to call a function on a key press or release

### 30 Accessors & Memory Layout ###

+ How the arrow, dot and **::** accessors work
+ Introducing virtual memory
+ Introducing permanent storage, stack & heap
+ Heap is also known as free store
+ How accessor operators relate to memory
+ Bind another input action

### 31 Reducing Code in “Hot Loops” ###

+ A “hot loop” is code that get called often
+ **TickComponent** is a good example, every frame
+ Beware of code that you know will be called a lot
+ Make it clear what happens every tick
+ Refactor our code for speed...
+ ...and make it ready for for the physics handle.

### 32 Using Physics Handles ###

+ Unreal provides a Physics Handle that’s ideal here
+ The Physics Handle component docs are scant\*
+ Find an example of its use in the engine
+ Get the physics handle working.

**Useful Links**

+ [Unreal Engine API Reference - UPhysicsHandleComponent](https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/PhysicsEngine/UPhysicsHandleComponent/)

### 33 Refactoring Rules ###

+ Using multiple getters for multiple return values
+ Less lines of clear code is better (143 at start)
+ Naming is really important, take the time
+ Comment the “why”, don’t assume it’s obvious
+ The “what” should be obvious...
+ … but it can be helpful to add clarification

### 34 Introducing Unreal’s TArray ###

+ A **TArray** is Unreal’s go-to container class
+ Use to contain many elements of same type
+ We’ll use to contain all actors on pressure plate
+ Give our Default Pawn an eye-height and mass
+ Making our pressure-plate based on total mass.

### 35 Iterating over TArray with for ###

+ Using **auto&** as an auto reference type
+ Automatically iterating over a **TArray**
+ Pattern: **for (const auto\* Iterator : Array)**
+ How to find an actor’s mass
+ Tweaking and testing our mass values.

### 36 Debugging Game Issues ###

+ Are you using source control? If not start now
+ You can “binary search” commits quite fast
+ For example 1024 commits takes max 10 tries!
+ Think “what changed” and “possible side-effects”
+ Remember you can eject with F8 during play.

### 37 Managing Texture Tiling ###

+ You may want to re-size objects (e.g. panels)
+ Doing so will stretch the texture
+ You can re-scale a few ways
+ One way is in the material blueprint
+ UV mapping because we ran out of letters!
+ Using the TexCoord node in the material editor.

### 38 Pointer Protection Process ###

+ Horrible crashes when we follow a nullptr
+ We must always check pointers before use
+ When declaring always initialise to nullptr
+ Look for * in your .h files to help find pointers
+ Also check before every use and handle nullptr
+ Sometimes we may chose not to, e.g. Owner.

### 39 Exposing Events to Blueprint ###

+ Sometimes Blueprint’s the better choice
+ For example defining our door swing as a curve
+ We can create an event called **OnOpenRequest**
+ Using **UPROPERTY (BlueprintAssignable)**

### 40 Using Blueprint Timeline ###

+ The Timeline node in Blueprint has a curve editor
+ This is ideal for defining our door movement
+ How to use Timeline curves in Blueprint
+ Setting rotation from a Timeline.

### 41 Everything in its Place ###

+ Using Blueprint has superseded some code
+ It’s important there’s only 1 place per parameter
+ Creating a 2nd event: **OnClose**

### 42 Using Variables in Blueprint ###

+ Not all doors have the same absolute rotation
+ We want to store the door’s rotation at the start
+ … then use this value to make a relative rotation
+ We can use Blueprint variables for this
+ Making doors that face any direction work.

### 43 SFX & Audio Clips ###

+ We’re going to trigger a simple sound in Blueprint
+ Later in the course we’ll use C++ too
+ However we’ll always reference our assets via BP
+ How to trigger a 3D sound.

### XX Section 3 Wrap-Up ###

+ Congratulations on another complete section
+ You’ve learnt so much, look at the lecture titles
+ Please carry-on a little on your own and share
+ Attached are useful resources
+ Start the next section as soon as you’re finished.
