Pod::Spec.new do |s|
  s.name = "MBTest"
  s.version = "0.1.0"
  s.summary = "A short description of MBTest."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"boduoduo"=>"maxb@qq.com"}
  s.homepage = "https://github.com/boduoduo/MBTestBinary"
  s.description = "TODO: Add long description of the pod here."
  s.source = { :path => '.' }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/MBTest.embeddedframework/MBTest.framework'
end
