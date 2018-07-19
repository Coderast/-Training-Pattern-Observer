# In short
My traning project for learning pattern "Observer" <br>
Dota notifies Players about gotten Tower damage.
# About
## Classes hierarhy
We have two interfaces which defines our pattern:
1. `IObserver` 
   - `void update(const Tower&)` 
2. `IObservable`
   - `void notifyObservers()`
   - `addObserver(IObserver *)`
   - `removeObserver(IObserver *)`

`IObserver` -> `Player` <br>
`IObservable` -> `Tower`

### Player
Fields:
* `nickname_`**: string**
* `team_`**: <a href="#team-enum--bool">Team</a>**
* _static_ `count_`**: unsigned __int8**

### Tower
Fields:
* `team_`**: <a href="#team-enum--bool">Team</a>**
* `side_`**: <a href="#side-enum--char">Side</a>**
* `healthPoints_`**: unsigned short**
* `players_`**: vector<IObserver*> players**

## Constants

### Team `enum : bool`
* `RADIANT` equals _true_
* `DIRE` equals _false_

### Side `enum : char`
* `TOP`
* `MIDDLE`
* `BOTTOM`
