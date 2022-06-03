# Setup
The first thing you need to do is create a class that inherits the `GameState` class. An abstract game state parent class is provided in the `GameState.hpp`. It includes two virtual methods, `tick()` and `render()`. To create your game, you must create an instance of a `Game` object and pass an object that has inherited from `GameState` to the constructor. The `tick()` method should contain your game logic and the `render()` method should contain any draw calls you may require.


The `Game` class has two available constructors. One just requires and object of a `GameState` inherited class to be passed in and will use default macro values for the dimensions and title of the game window. The second constructor takes in the width, height and title of the window in addition to the `GameState`. The `Game` class consists of the following methods:

| Method | Description |
| ---- | --------- |
| `run()` | Call after construction in order to begin running the game |
| `getInputHandler()` | Retrieve the input handler for querying key and mouse events. |
| `getTimeStep()` | Retrieve the timestep, used for getting the multiplier for consistent movement speeds. |
| `getGameState()` | Get the current gamestate of the game. |
| `getWindow()` | Get the game window. |
| `setGameState(GameState state)` | Set the game's current gamestate to a new desired gamestate. |