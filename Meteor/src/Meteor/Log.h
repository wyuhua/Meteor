#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Meteor {

	class METEOR_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define ME_CORE_TRACE(...) ::Meteor::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ME_CORE_INFO(...) ::Meteor::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ME_CORE_WARN(...) ::Meteor::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ME_CORE_ERROR(...) ::Meteor::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_FATAL(...) ::Meteor::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define ME_TRACE(...) ::Meteor::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ME_INFO(...) ::Meteor::Log::GetClientLogger()->info(__VA_ARGS__)
#define ME_WARN(...) ::Meteor::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ME_ERROR(...) ::Meteor::Log::GetClientLogger()->error(__VA_ARGS__)
#define ME_FATAL(...) ::Meteor::Log::GetClientLogger()->fatal(__VA_ARGS__)


