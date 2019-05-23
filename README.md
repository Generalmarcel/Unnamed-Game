# Unnamed-Game
Planned release in 8 weeks, created on May 22nd 2019, need a name, suggestions via [email](mailto:moritzwolf10@gmail.com), [twitter](https://twitter.com/Adm1nMiku) or [instagram](https://www.instagram.com/adm1nmiku).

## The Game itself
The game is focused on _historical events_, but also is planned to feature `Online PVP or Online PVE Story`, it's created with __[Unreal Engine](https://www.unrealengine.com/en-US/)__ and the code 
is written _C++_ and this means *3D-Rendering*.
The idea came from _Wargaming(**World Of Warships**)_, but this does not mean it'll not only contain around 60 ships.

### Testing
The main reason this is public on [github](https://github.com/), is for testing purposes[&lsqb;more&rsqb;](https://github.com/MikuAdmin/Unnamed-Game/blob/master/README.md#testing-rewards).

### Content
- Release
    * Ships
    * Tanks
    * Aircraft

- Beta
    * Ships
    * Tanks
    * Aircraft
    * Infantry _(testing)_

### Idea
The _game_ is structured like a 3d rpg, but contains more than just a regular one. The added content is a ***[TechTree](https://github.com/MikuAdmin/Unnamed-Game/blob/master/README.md#tech-tree)***, you also
play as a _[humanoid depictions](https://github.com/MikuAdmin/Unnamed-Game/blob/master/README.md#humanoid-depictions)_

### Tags
The following tags can and will be useable throughout the game _(from lowest to highest)_:
- Solider - Awarded when joining.
- Gunner - Awarded after finishing 20 Missions without a miss.
- Driver - Received after driving a distance of 500mi.
- 1<sup>st</sup> Officer - Awarded after killing 50 enemies.
- Lieutenant - For eliminating 125 enemies.
- Commander - Reward for successfully terminating an event boss.
- Captain - After collecting an entire set of vehicle types.
- Admiral - Receive when you have collected all ships/tanks/planes of an entire nation.
- Collector - Reward for collecting every single character.
- ***Competitor*** - Claimed after getting _100%_ on the game.
- ***&beta;&epsilon;&tau;&alpha;-Player*** - Reward for participating in the &beta;-Program _(in discussion)_.

### Humanoid Depictions
As said it will also be featuring _3D Depictions_ of Ships, Tanks and Planes. **Depictions only used for map**, for a nicer and cleaner 
look, especially in the case of playing a ship. Theese Characters ***aren't lacking*** the features of the respecive vehicle, which translates to showing *equipment and possibly even their weapons*.

### Custom Character Creation
Each character is an individual _C++_ file, example **[Seinaruhi](https://github.com/MikuAdmin/Unnamed-Game/blob/master/src/characters/seinaruhi.cpp)**, she actually is a depiction of myself as a _japanese_ **battleship**. This means you can code one yourself:
```c++
#include "character.h"
#include "types.h"

character::Character *create() {
   return new character::Character(ID, NAME, CHARACTER_NAME, TYPE);
}

bool build() {
   //the build function
}

bool receive() {
   //the receive after building function
   //should be called after building or fighting
}

bool bought() {
   //buying in the shop
}

bool earned() {
   //get for fighting
}
```
### Tech Tree
_Let's just say it's in development_.

## Testing Rewards
Everyone who wants to join beta testing, should sign up. Testing will be rewarded with an _[ingame character](https://github.com/MikuAdmin/Unnamed-Game/blob/master/README.md#humanoid-depictions)_, a special tag and some hidden features for certain things. The [special tag](https://github.com/MikuAdmin/Unnamed-Game/blob/master/README.md#tags) is also considered as an option, which I'll be discussing with my helpers. You'll be notified if you choose to join.
