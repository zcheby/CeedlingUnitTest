PROJECT_CEEDLING_ROOT = "../../tools/ceedling/vendor/ceedling"
load "#{PROJECT_CEEDLING_ROOT}/lib/ceedling.rb"

Ceedling.load_project

task :default => %w[ test:all release ]
