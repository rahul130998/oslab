read -p "Enter name: " readv
cd ..;
cd ..;
pwd;
if [ -d $readv ]
then 
    echo "This is a directory"
else 
    echo "This is not a directory"
fi
if [ -f $readv ]
then 
    echo "This is a file"
    chmod 444 $readv
else 
    echo "This is not a file"
fi

