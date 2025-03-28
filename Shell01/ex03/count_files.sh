find . ! -name ".." -exec basename {} \; | wc -l | tr -d " "
