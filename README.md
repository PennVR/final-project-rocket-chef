## CIS 568 - Final Project: Rocket Chef
### Team members: Krishna Bharathala, Devesh Dayal, Natasha Narang, Carolina Zheng

Check out our project here: [Youtube](https://youtu.be/h0LXCx1KhmU)

### What is our game?

Rocket Chef is the exciting new sequel to [Attack of the Drones](https://github.com/PennVR/unreal-project-materials-and-textures) in the Materials and Textures family of games.

In a futuristic world, the Earth has run out of precious metals to sustain life. In an effort to continue the species, the space agencies of the world teamed up to create a program Metal Extraction Robot Team (M. E. R. T.) These robots travel to the moon, drill under the surface and extract the metal before traveling back to Earth. 

Unfortunately, they only have fuel capacity to take them half way to the moon (trade-off between size and capacity). Thus there must be a refuel station in the middle of space to make sure that the robots can complete the mission. If a robot runs out of fuel, it is designed to explode so that there is no large debris floating around in space.

The fueling stations have thus been designed to be as efficient as possible to make sure that no robot explodes inside. It is your first day on the job and you have to hit the ground running or end up being responsible for the destruction of an entire fueling station.

Rocket Chef is a fast-paced, immersive VR experience with a simple goal - quickly and accurately fulfill robot customer's orders in space. Use rocket boots to fly between customer locations and the kitchen. Complete as many orders as possible in the time allotted or risk angering your fickle robot customers. In order to help you create the different orders, multiple tools are provided, with different motion control actions associated with them.

### How to play.

1. Collect the order from the robot.
2. Use the Teleportation pod to go to the kitchen
3. Paint the fuel the correct color.
4. Place the fuel in either the freezer or stove.
5. Spice up the fuel on the shaker board.
6. Deliver the fuel to the robot before the time is up!
7. Repeat until you're overrun with robots.

### Techniques

#### Mechanical

##### Rocket Flight

Our biggest innovation through this game are the Rocket Boots. Our goal was to create a movement system that was fast and novel while making sure that the player always felt stable and grounded. We built a helmet and parented it to the camera at the right distance to ensure that the player had a solid frame of reference without blocking out too much of the surroundings. We are incredibly proud of how this worked.

##### Grasping

In order to make our hands more realistic, we used an animation BP that would grasp on button click. There are three states for the animation. The first is open, the second is "ready to close", and the third is "closed".

##### Spice Shaking

One of the kitchen assets that we implemented was shakers (salt, pepper, and spice). We wanted the asset to only activate if the user used the shaker the same way they would in real life. We created collision boxes below and above the shaker board and then checked to see that there was a small amount of time between the collisions with the two meshes. It took us some time to make sure that the shaking felt natural and intuitive, by playing around with the space between the two collision boxes and the speed at which the player needed to shake.

##### Pulsing

In order to make the game more intuitive, we thought it would be helpful to the user if all the touchable objects glowed. Then the user would have a finite amount of objects to check in the world and the objective would seem a lot more straight forward. The pulsing was technically interesting because we built them into the material instead of putting it on tick, to make sure that our frame rate was maintained.

#### Visual

##### Main Lobby

We sourced most of our assets from the Epic Games marketplace. Some of the cooler things that we built on top of this was the "music notes" that come out of the saxophone player. We also built a lighting system that flashes failure when the player does not deliver the fuel in time. In addition, we built a display system that integrated into the diner that told us what the current order was. All of our robots were randomly spawned on the screen in terms of location, time, and color.

##### Kitchen

Again we sourced many assets from the Epic Games marketplace. We used different particle effects and sound effects in order to create a more immersive experience.

* Color: We used particle effects to create an explosion of color that changed the material that our fuel was made of.

* Temperature: We used smoke and fire effects in order to set the temperature of our fuel.

#### Programming

##### C++ Class

We created a C++ class that instantiated our Robot Class. It was used to randomly generate different recipes, check that the recipes being delivered were accurate, and create the enumerators that dictated how the recipes were constructed. We found that using C++ was much faster in terms of debugging and development time, but the specific Unreal syntax and conventions were difficult to pick up at points. For example, enums must start with the letter E and actors must start with the letter A, otherwise the engine silently fails.

##### Procedural Content

For this aspect of our game, we decided to procedurally generate planets in space. To do so, we created a dynamic material that took in four base colors as well as a "cloud color" for the emissive noise. We then wrote a custom material function that performed vector calculations on the UV inputs, potential planet offset locations, and planet thickness, in order to give us an output texture that served as the base for our planet. The function also returned three normal vectors, which we then used to generated perturbed normal vectors to build a normal map as well as give us attributes for specularity, roughness, and metallicness of the resulting material. Finally, now that the material was created, in order to actually generate the planets, we spawned multiple small spheres all over the environment. We then, on construction, generated a random emissive base color, a scale and the ability for the planet to have programmatically generated rings (with a weighted probability). The end result was planets that generated in random locations with different colors and features every time the user ran a new game.

### VR Mode

Virtual Reality sickness was one of the main challenges that we had to deal with when building our game. Virtual reality sickness occurs when a user's perception of motion (from the game) does not line up with what their body is feeling through the vestibular system and other propioreceptors. 

Our game is particularly prone to this challenge because we use the rocket boots to fly around space which means the user sees the motion everytime they want to move. Most other VR games use a teleporation scheme to prevent the user from feeling any sense of acceleration/deceleration. 

To get around this, we theorized that having the player wear a space helemet would create a fixed point of reference which would prevent the motion sickness. We have tested this with all members of our team as well as other players. Only one individual (who has a history of motion sickness) felt that our game was too hard to play. We have since made some more modifications and we believe we have reduced that as well.


### Hardest Part of the Assignment

There were four specific challenges that stood out to us.

* We struggled with making our game intutive to other players. We thought that the side grip button would be best for grasping objects, but most people prefer to click the trigger over the grip. Further, making sure that players knew where to go at all times was a challenge. We do not think that we have fully accomplished this, but we hope that the game makes sense to some extent.

* We faced a lot of difficulty in working on different parts of the project at the same time. At first we took care of this by having different levels that various people worked on, but after integration, it significantly slowed productivity since the map could only be edited by one of our members at a time.

* We also spent a lot of time making our game immersive. At first we focused on making sure that the game we had was fun to play -- engaging and exciting. The next focus was on having an ambiance that was fun and playful. This included adding music and more lighting. Finally we used some pre-built assets to make the world come to life.

* We had many frame rate issues throughout the game. We offset a lot of this by reducing the number of particle effects, but the biggest breakthrough came by using forward shading instead of deferred shading. 


### What do we wish we had done differently?

We are very happy with our final product. The one thing that we wish we had done was have more people play test our game and give us feedback. Everyone that we got feedback from was familiar with VR and had their own tendencies and nuances with how to use controllers and play space. It would be more interesting to hear from people that have never used a headset or haven't created games before, in order to see how intuitive they think the game is.

### What do we wish you had done differently?

No complaints!
