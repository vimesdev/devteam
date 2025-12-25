#ifndef DEVLICENSEMANAGER_H
#define DEVLICENSEMANAGER_H

#pragma once
#include <string>
#include <vector>

// Cấu trúc lưu thông tin database config
struct DatabaseConfig {
    std::string host;
    std::string port;
    std::string dbname;
    std::string username;
    std::string password;
    std::string hash;
};

class DevLicenseManager {
private:
    std::vector<DatabaseConfig> m_configs;         // Danh sách các database config
    bool m_licenseLoaded;                          // Trạng thái đã load license chưa
    int m_nIndex;

public:
    DevLicenseManager();
    bool LoadLicense(const std::string& licPath);
    bool ValidateLicenseIntegrity();               // Kiểm tra tính toàn vẹn của tất cả configs
    bool ValidateLicenseIntegrity(const std::string& host);  // Kiểm tra tính toàn vẹn của config có host tương ứng
    bool ValidateAll();                            // Kiểm tra tất cả các điều kiện
    bool ValidateAll(const std::string& host);      // Kiểm tra tính toàn vẹn của config có host tương ứng
    bool IsLicenseLoaded() const { return m_licenseLoaded; }
    
    // Getter methods - lấy thông tin từ config đầu tiên (backward compatibility)
    std::string GetHost() const;
    std::string GetPort() const;
    std::string GetDatabaseName() const;
    std::string GetUsername() const;
    std::string GetPassword() const;
    
    // Getter methods - lấy thông tin từ config theo index
    std::string GetHost(size_t index) const;
    std::string GetPort(size_t index) const;
    std::string GetDatabaseName(size_t index) const;
    std::string GetUsername(size_t index) const;
    std::string GetPassword(size_t index) const;
    
    // Lấy số lượng configs
    size_t GetConfigCount() const { return m_configs.size(); }
    
    // Lấy toàn bộ config theo index
    const DatabaseConfig& GetConfig(size_t index) const;
    
    // Static method để tạo hash từ các trường
    static std::string GenerateHash(const std::string& host, const std::string& port, 
                                    const std::string& dbname, const std::string& username, 
                                    const std::string& password);
    
    // Static method để tạo và cập nhật hash cho tất cả items trong file dev.lic
    static bool GenerateAndUpdateHashes(const std::string& licPath);
};

#endif
