# Module  
to use module in a js file we need to tell in html file by adding (type="module") inside the script tag.  
* <script type="module" src="constructor.js"></script> *  



- There is no need to use the defer attribute (see <script> attributes) when loading a module script; modules are deferred automatically.  

- Note: Although imported features are available in the file, they are read only views of the feature that was exported. You cannot change the variable that was imported, but you can still modify properties similar to const. Additionally, these features are imported as live bindings, meaning that they can change in value even if you cannot modify the binding unlike const.

