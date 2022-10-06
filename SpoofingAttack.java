/*<==SPoofing attack===>

Everybody knows that a java program is a set of classes. When a java program starts, it loads these classes using class loading
facilities.As java was designed to be a network programming language, certain java apps can be loaded over the network.
Based on this approach to loading the code for a program, a potential security vulnerability for the java
application is exposed. 

Imagine a malicious actor monitors the network and substitutes his/her own version of the class file being
loaded over the network. The class being substituted can have much different set of instructions than what the original
programmer intended. 

To protect against these attacks,  the java class loader
was designed to distinguish between classes
loaded locally from the local domain and classes loaded over the network.
Classes loaded over the network run in a more restricted environment
and do not have full system security permissions,
which means that they are not allowed to use local system resources.
*/

// Java security classes


java.security.CodeSource // this represents the location where the code was loaded, a codebase. (java.net.URL) This could be a local filesys or network location.
java.security.Principal // this represents an authorised user (not necessarily physical) via security certificates.
java.security.Permission // this represents access to a local system resource, and associated actions that can be performed on that resource.
