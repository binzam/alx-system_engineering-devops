# Shell Permissions
* su betty -> Switch current user to user __betty__
* id -un or whoami -> Print current users Username
* groups  -> Print all the groups the current user is part of
* chown betty hello -> Change the owner of the file __hello__ to the user __betty__
* touch hello -> Crete an empty file __hello__
* chmod u+x hello -> Add executive permission to the owner of the file __hello__
* chmod u+x,g+x,o+r hello -> Add exectutive permission to owner and group,read permission to others ,to the file __hello__
* chmod ugo+x hello -> Adds execution permission to the owner, the group owner and the other users, to the file __hello__
* chmod 007 hello -> Owner: no permission at all,Owner: no permission at all,Other users: all the permissions
* chmod 753 hello -> set the mode to > '-rwxr-x-wx'
* chmod --reference=olleh hello -> sets the mode of the file hello the same as olleh’s mode
* chmod -R ugo+X  -> adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users.
* mkdir -m 751 my_dir ->   creates a directory called my_dir with permissions 751 in the working directory.* chgrp school hello -> changes the group owner to school for the file hello
