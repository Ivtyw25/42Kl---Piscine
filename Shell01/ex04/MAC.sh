#! /bin/sh

ifconfig -a | grep ether | grep -oE '([a-f0-9]{2}:){5}..'           