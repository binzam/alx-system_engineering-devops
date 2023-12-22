# Using Puppet, install flask & werkzeug from pip3.
exec { 'install-werkzeug':
  command => 'pip3 install werkzeug==2.1.1',
  path    => ['/usr/bin', 'usr/local/bin']
}
exec {'install-flask':
  command => 'pip3 install Flask==2.1.0',
  require => Exec['install-werkzeug'],
  path    => ['/usr/bin', 'usr/local/bin']
}
