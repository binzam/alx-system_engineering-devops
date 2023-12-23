# Using Puppet, create a manifest that kills a process named killmenow.
# using pkill command
exec{ 'kill-killmenow-process':
  command => 'pkill -f killmenow',
  path    => '/usr/bin'
}
