# [Learn with Sumit](https://www.youtube.com/watch?v=pcN3PFnw2Q0&list=PLHiZ4m8vCp9MFjMRp9EEHWKArbi0wdgXG)  
  
# [Module](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Modules)  
to use module in a js file we need to tell in html file by adding (type="module") inside the script tag.  
* <script type="module" src="constructor.js"></script> *  



- There is no need to use the defer attribute (see <script> attributes) when loading a module script; modules are deferred automatically.  

- Note: Although imported features are available in the file, they are read only views of the feature that was exported. You cannot change the variable that was imported, but you can still modify properties similar to const. Additionally, these features are imported as live bindings, meaning that they can change in value even if you cannot modify the binding unlike const.  
-  
To do import export in ES6 convention use -> 
- {  
  - "type":"module"   
- }   
in package.json  
-  
ES6 also need .js extension after file pathname in import time
